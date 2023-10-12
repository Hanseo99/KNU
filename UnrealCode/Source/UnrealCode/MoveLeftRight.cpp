// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight():LocX(0),IsMoveRight(1)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CreateDefaultSubobject : new Ű����� ���� �𸮾󿡼� �������� ��ü�� �����ϴ� Ű����
	// TEXT : �𸮾󿡼� ����ϴ� ������ �� �ϳ�
	// <USceneComponent>(TEXT("SceneRootRoot")) // USceneComponent ��ü�� "SceneRootRoot" �̸����� �������� ����
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootRoot"));
	// <UStaticMeshComponent>(TEXT("mymyMesh")) // UStaticMeshComponent ��ü�� "mymyMesh" �̸����� �������� ����
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));

	SetRootComponent(Scene); // Scene�� Root Component�� �ø��ڴ�.
	// RootComponent = Scene;// Scene�� Root Component�� �ø��ڴ�.

	// AttachToComponent : Component ������ ���
	// Scene�� ������, ���� ��ǥ���� Scene ���� Relative(���) ��ǥ��� 
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	// RootComponent�� ������, ���� ��ǥ���� RootComponent ���� Relative(���) ��ǥ��� 
	// StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// UAsset ��������
	// ConstructorHelpers::FObjectFinder : ������Ʈ ������ ã�´�.
	// <UStaticMesh> : ã�� ���� Ÿ��
	// sm : ã�Ƽ� ���� ��ü �̸�
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded())// ���� �ҷ����� ���� ���� üũ
	//{
	//	StaticMesh->SetStaticMesh(sm.Object);// StaticMeshComponent�� StaticMesh ����
	//}
}

// Called when the game starts or when spawned
void AMoveLeftRight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveLeftRight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);// �������̵��� �Լ��� ��� �θ� �Լ��� �����Ѵ�

	IsMoveRight;//������ ����
	
	// SetRelativeLocation : ������� ��ġ���� �����Ѵ�.
	// FVector : �𸮾󿡼� ����ϴ� 3���� ��ǥ ����
	StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));
	
	if (IsMoveRight == 1)
	{
		LocX += 1;// ������
		if (LocX == 200)
		{
			IsMoveRight = 0;
		}
	}
	else
	{
		LocX -= 1;// ����
		if (LocX == -200)
		{
			IsMoveRight = 1;
		}
	}

	

}

