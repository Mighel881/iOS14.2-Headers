/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject {

	const CFStringRef _textStyle;
	NSString* _sizeCategory;

}

@property (nonatomic,readonly) const CFStringRef textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) NSString * sizeCategory;                  //@synthesize sizeCategory=_sizeCategory - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(const CFStringRef)textStyle;
-(NSString *)sizeCategory;
-(id)initWithTextStyle:(const CFStringRef)arg1 sizeCategory:(id)arg2 ;
@end
