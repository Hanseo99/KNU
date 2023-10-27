// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // ������ �ӵ��� ������ �ϱ� ���� �⺻���� �ּ����� �������
#include"Public/Tools/InterfacePlayObj.h"
#include "GameFramework/Actor.h"
#include "MoveLeftRight.generated.h"

UCLASS()
class UNREALCODE_API AMoveLeftRight : public AActor, public IInterfacePlayObj // public AActor : AActor�� ��� ��� �ްڴ�. public IInterfacePlayObj : �������̽� ���
{
	GENERATED_BODY()// �𸮾� �ڵ� ���� �Լ� - �𸮾� Ŭ���� ���� �⺻ ��Ģ
	
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
	void Code_DoPlay(bool IsPlay);// �������Ʈ ȣ��� �Լ��� ����

	virtual void Code_DoPlay_Implementation(bool IsPlay) override;// c++���� ���� �� �Լ�

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float m_LocX;

	bool m_IsMoveRight;

	bool m_IsPlay;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)//�����Ϳ� ���������ϵ��� ǥ��
	TObjectPtr<class ASwitch> m_Switch;		// ����ġ ����

};
