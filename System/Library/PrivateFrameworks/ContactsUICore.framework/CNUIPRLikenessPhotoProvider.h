/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class NSData, CNCache, NSString;

@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider> {

	NSData* _originalPhotoData;
	CNCache* _cache;
	NSString* _likenessFingerprint;

}

@property (nonatomic,readonly) CNCache * cache;                             //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * likenessFingerprint;              //@synthesize likenessFingerprint=_likenessFingerprint - In the implementation block
@property (nonatomic,readonly) NSData * originalPhotoData;                  //@synthesize originalPhotoData=_originalPhotoData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)cgImageFromData:(id)arg1 maxSize:(CGSize)arg2 ;
+(CGImageRef)cgImageFromData:(id)arg1 ;
-(CNCache *)cache;
-(CGImageRef)_cnui_image;
-(CGImageRef)_cnui_imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSData *)originalPhotoData;
-(CGImageRef)renderCircularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSString *)likenessFingerprint;
-(CGImageRef)renderRoundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)_cnui_likenessType;
-(id)initWithPhotoData:(id)arg1 fingerprint:(id)arg2 ;
-(CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2 ;
@end
