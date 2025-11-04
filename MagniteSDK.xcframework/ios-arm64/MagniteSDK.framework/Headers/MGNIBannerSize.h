//
//  MGNIBannerSize.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.1

#import <UIKit/UIKit.h>


typedef struct MGNIBannerSize {
    CGSize size;
    BOOL isAuto;
} MGNIBannerSize;

#pragma mark Standard Sizes

/// iPhone and iPod Touch in portrait mode = 320x50.
extern MGNIBannerSize const MGNIBannerSizePortrait320x50;

/// iPhone and iPod Touch in landscape mode = 480x50.
extern MGNIBannerSize const MGNIBannerSizeLandscape480x50;

/// iPhone and iPod Touch in landscape mode = 568x50.
extern MGNIBannerSize const MGNIBannerSizeLandscape568x50;

/// iPad in portrait mode = 768x90.
extern MGNIBannerSize const MGNIBannerSizePortrait768x90;

/// iPad in landscape mode = 1024x90.
extern MGNIBannerSize const MGNIBannerSizeLandscape1024x90;

/// MRec = 300x250.
extern MGNIBannerSize const MGNIBannerSizeMRec300x250;

extern MGNIBannerSize const MGNIBannerSizeCover300х157;

/// Automatic banner size. Banner view should have a superview to load ad.
extern MGNIBannerSize const MGNIBannerSizeAuto;
