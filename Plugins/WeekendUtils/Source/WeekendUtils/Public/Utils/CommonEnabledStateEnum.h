﻿///////////////////////////////////////////////////////////////////////////////////////
/// Copyright (C) 2023 by Benjamin Barz in cooperation with Aesir Interactive GmbH.
///
/// This file is part of the WeekendUtils UE5 Plugin.
///
/// Distributed under the MIT License. See accompanying file LICENSE.
///
///////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "EnumUtils.h"

///////////////////////////////////////////////////////////////////////////////////////
/// UFUNCTION(BlueprintCallable, BlueprintPure = False, ExpandEnumAsExecs = "ReturnValue")
/// ECommonEnabledState BranchIsEnabled() const;

UENUM(BlueprintType)
enum class ECommonEnabledState : uint8
{
	Enabled,
	Disabled
};

DEFINE_ENUM_STRING_CONVERTERS(CommonEnabledState, ECommonEnabledState);
DEFINE_ENUM_BOOL_CONVERTERS(CommonEnabledState, ECommonEnabledState, Enabled, Disabled);

///////////////////////////////////////////////////////////////////////////////////////