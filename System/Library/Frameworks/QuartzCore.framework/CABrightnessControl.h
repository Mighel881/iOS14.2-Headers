/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol CABrightnessControl <NSObject,CABrightnessTransaction>
@property (nonatomic,readonly) BOOL brightnessAvailable; 
@property (nonatomic,readonly) BOOL whitePointAvailable; 
@property (nonatomic,readonly) BOOL whitePointD50XYZ; 
@property (nonatomic,readonly) NSDictionary * brightnessCapabilities; 
@required
-(BOOL)whitePointD50XYZ;
-(NSDictionary *)brightnessCapabilities;
-(BOOL)whitePointAvailable;
-(BOOL)brightnessAvailable;

@end
