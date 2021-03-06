/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUI/CoreUI-Structs.h>
@class NSData, _CUIThemePixelRendition, _CSIRenditionBlockData, NSString;

@interface CSIHelper : NSObject {

	slice slice;
	NSData* csiData;
	csibitmap* bmp;
	os_unfair_lock_s renditionLock;
	_CUIThemePixelRendition* rendition;
	_CSIRenditionBlockData* sharedBlockDataBGRX;
	_CSIRenditionBlockData* sharedBlockDataRGBX;
	_CSIRenditionBlockData* sharedBlockDataGray;
	_CSIRenditionBlockData* retainedBlockData;
	NSString* blockDataCacheKeyBGRX;
	NSString* blockDataCacheKeyRGBX;
	NSString* blockDataCacheKeyGray;
	unsigned long long sourceRowbytes;
	unsigned shouldCache : 1;
	unsigned usedForDataProvider : 1;
	unsigned _reserved : 30;

}
-(void)dealloc;
@end

