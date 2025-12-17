//
//  MGNIErrorCodes.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.3

typedef NS_ENUM(NSUInteger, MGNIError) {
    ///Unexpected error occured
    MGNIErrorUnexpected              = 0,
    
    ///Connection issue occured
    MGNIErrorNoInternetConnection    = 1,
    
    ///Internal error occured
    MGNIErrorInternal                = 2,
    
    ///appID not set in MagniteSDK
    MGNIErrorAppIDNotSet             = 3,
    
    ///Invalid or insufficient params set when requesting ad
    MGNIErrorInvalidParams           = 4,
    
    ///Ad was not loaded because of internal rules
    MGNIErrorAdRules                 = 5,
    
    ///Invalid or missing params in loaded ad
    MGNIErrorExpectedAdParamsMissingOrInvalid = 6,
    
    ///Some of ad types are not supported by old iOS versions
    MGNIErrorAdTypeNotSupported      = 7,
    
    ///Failed to show ad because another ad is being shown at the moment
    MGNIErrorAdAlreadyDisplayed      = 8,
    
    ///Failed to show ad because it has expired
    MGNIErrorAdExpired               = 9,
    
    ///Failed to show ad because it is not ready
    MGNIErrorAdNotReady              = 10,
    
    ///loadAd was called for native ad while it is in loading state
    MGNIErrorAdIsLoading             = 11,
    
    ///Demand issue which means that there are no active ads at current region for requested params
    MGNIErrorNoContent               = 12,
};
