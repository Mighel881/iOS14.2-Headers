/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate {

	CLKImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(CGSize)_imageSize;
+(id)templateWithImageProvider:(id)arg1 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(id)initWithImageProvider:(id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
@end
