/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,copy) NSString * imageKind;                                   //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double imageScale; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)imageScale;
-(id)initWithXPCEncoding:(id)arg1 ;
-(CGSize)imageSize;
-(long long)imageOrientation;
-(id)copyXPCEncoding;
-(long long)height;
-(long long)width;
-(unsigned long long)hash;
-(BOOL)isPrerendered;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)URLString;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)imageKind;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(NSURL *)URL;
-(void)dealloc;
-(void)setImageKind:(NSString *)arg1 ;
@end

