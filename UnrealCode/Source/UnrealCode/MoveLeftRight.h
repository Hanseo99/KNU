// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // 컴파일 속도를 빠르게 하기 위해 기본적인 최소한의 헤더파일
#include"Public/Tools/InterfacePlayObj.h"
#include "GameFramework/Actor.h"
#include "MoveLeftRight.generated.h"

UCLASS()
class UNREALCODE_API AMoveLeftRight : public AActor, public IInterfacePlayObj // public AActor : AActor에 기능 상속 받겠다. public IInterfacePlayObj : 인터페이스 상속
{
	GENERATED_BODY()// 언리얼 코드 생성 함수 - 언리얼 클래스 생성 기본 규칙
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void EventOverlap(bool IsBegin);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Code_DoPlay(bool IsPlay);// 블루프린트 호출용 함수명 선언

	virtual void Code_DoPlay_Implementation(bool IsPlay) override;// c++에서 실행 될 함수

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float m_LocX;

	bool m_IsMoveRight;

	bool m_IsPlay;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)//에디터에 편집가능하도록 표시
	TObjectPtr<class ASwitch> m_Switch;		// 스위치 연결

};
