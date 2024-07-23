// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/AuraEffectActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEffectActor() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraEffectActor();
AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy();
AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Enum EEffectApplicationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
static UEnum* EEffectApplicationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectApplicationPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
}
template<> AURA_API UEnum* StaticEnum<EEffectApplicationPolicy>()
{
	return EEffectApplicationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyOnEndOverlap.Name", "ApplyOnEndOverlap" },
		{ "ApplyOnOverlap.Name", "ApplyOnOverlap" },
		{ "BlueprintType", "true" },
		{ "DoNotApply.Name", "DoNotApply" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ApplyOnOverlap", (int64)ApplyOnOverlap },
		{ "ApplyOnEndOverlap", (int64)ApplyOnEndOverlap },
		{ "DoNotApply", (int64)DoNotApply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	"EEffectApplicationPolicy",
	"EEffectApplicationPolicy",
	Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
}
// End Enum EEffectApplicationPolicy

// Begin Enum EEffectRemovalPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
static UEnum* EEffectRemovalPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectRemovalPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
}
template<> AURA_API UEnum* StaticEnum<EEffectRemovalPolicy>()
{
	return EEffectRemovalPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotRemove.Name", "DoNotRemove" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
		{ "RemoveOnEndOverlap.Name", "RemoveOnEndOverlap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RemoveOnEndOverlap", (int64)RemoveOnEndOverlap },
		{ "DoNotRemove", (int64)DoNotRemove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	"EEffectRemovalPolicy",
	"EEffectRemovalPolicy",
	Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
}
// End Enum EEffectRemovalPolicy

// Begin Class AAuraEffectActor Function ApplyEffectToTarget
struct Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics
{
	struct AuraEffectActor_eventApplyEffectToTarget_Parms
	{
		AActor* TargetActor;
		TSubclassOf<UGameplayEffect> GameplayEffectClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execApplyEffectToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClass);
	P_NATIVE_END;
}
// End Class AAuraEffectActor Function ApplyEffectToTarget

// Begin Class AAuraEffectActor Function OnEndOverlap
struct Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics
{
	struct AuraEffectActor_eventOnEndOverlap_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnEndOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execOnEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class AAuraEffectActor Function OnEndOverlap

// Begin Class AAuraEffectActor Function OnOverlap
struct Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics
{
	struct AuraEffectActor_eventOnOverlap_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::AuraEffectActor_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::AuraEffectActor_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execOnOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class AAuraEffectActor Function OnOverlap

// Begin Class AAuraEffectActor
void AAuraEffectActor::StaticRegisterNativesAAuraEffectActor()
{
	UClass* Class = AAuraEffectActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffectToTarget", &AAuraEffectActor::execApplyEffectToTarget },
		{ "OnEndOverlap", &AAuraEffectActor::execOnEndOverlap },
		{ "OnOverlap", &AAuraEffectActor::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEffectActor);
UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister()
{
	return AAuraEffectActor::StaticClass();
}
struct Z_Construct_UClass_AAuraEffectActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraEffectActor.h" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEffectRemoval_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectRemovalPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEffectRemoval;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstantEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DurationGameplayEffectClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PeriodicGameplayEffectClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PeriodicEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfiniteGameplayEffectClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfiniteEffectApplicationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfiniteEffectRemovalPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 4276142931
		{ &Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap, "OnEndOverlap" }, // 3654155719
		{ &Z_Construct_UFunction_AAuraEffectActor_OnOverlap, "OnOverlap" }, // 941061584
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEffectActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj)
{
	((AAuraEffectActor*)Obj)->bDestroyOnEffectRemoval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval = { "bDestroyOnEffectRemoval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraEffectActor), &Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnEffectRemoval_MetaData), NewProp_bDestroyOnEffectRemoval_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClass = { "InstantGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantGameplayEffectClass_MetaData), NewProp_InstantGameplayEffectClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy = { "InstantEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantEffectApplicationPolicy_MetaData), NewProp_InstantEffectApplicationPolicy_MetaData) }; // 333201886
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClass = { "DurationGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, DurationGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationGameplayEffectClass_MetaData), NewProp_DurationGameplayEffectClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy = { "DurationEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, DurationEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationEffectApplicationPolicy_MetaData), NewProp_DurationEffectApplicationPolicy_MetaData) }; // 333201886
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_PeriodicGameplayEffectClass = { "PeriodicGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, PeriodicGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodicGameplayEffectClass_MetaData), NewProp_PeriodicGameplayEffectClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_PeriodicEffectApplicationPolicy = { "PeriodicEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, PeriodicEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodicEffectApplicationPolicy_MetaData), NewProp_PeriodicEffectApplicationPolicy_MetaData) }; // 333201886
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClass = { "InfiniteGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteGameplayEffectClass_MetaData), NewProp_InfiniteGameplayEffectClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy = { "InfiniteEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectApplicationPolicy_MetaData), NewProp_InfiniteEffectApplicationPolicy_MetaData) }; // 333201886
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy = { "InfiniteEffectRemovalPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteEffectRemovalPolicy), Z_Construct_UEnum_Aura_EEffectRemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectRemovalPolicy_MetaData), NewProp_InfiniteEffectRemovalPolicy_MetaData) }; // 953923974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_PeriodicGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_PeriodicEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams = {
	&AAuraEffectActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEffectActor()
{
	if (!Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton, Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraEffectActor>()
{
	return AAuraEffectActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEffectActor);
AAuraEffectActor::~AAuraEffectActor() {}
// End Class AAuraEffectActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 333201886U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 953923974U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEffectActor, AAuraEffectActor::StaticClass, TEXT("AAuraEffectActor"), &Z_Registration_Info_UClass_AAuraEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEffectActor), 2198765324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_890394099(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_travi_OneDrive_Documents_Unreal_Projects_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
