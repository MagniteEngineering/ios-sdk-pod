//
//  MGNIInlineView.h
//  MagniteSDK
//
//  Copyright (c) 2026 Magnite. All rights reserved.
//  SDK version 1.0.2

#import <MagniteSDK/MGNIBannerViewBase.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @class
 @brief This class represents Banners which support autolayout.
 
 @discussion    This class was designed to support autolayout engine. Provided size affects its intrinsic contentSize. Origin will be determined by constriants.
 */
@interface MGNIInlineView : MGNIBannerViewBase

@end

NS_ASSUME_NONNULL_END
