/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge : CLKComplicationTemplate {

	CLKTextProvider* _headerTextProvider;
	NSData* _contentData;

}

@property (nonatomic,copy) CLKTextProvider * headerTextProvider;              //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,retain) NSData * contentData;                            //@synthesize contentData=_contentData - In the implementation block
-(CLKTextProvider *)headerTextProvider;
-(NSData *)contentData;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(void)setContentData:(NSData *)arg1 ;
@end

