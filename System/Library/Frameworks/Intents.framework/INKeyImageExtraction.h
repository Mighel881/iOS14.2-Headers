/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/INImageStoring.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, INImage, NSDictionary;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding> {

	NSMutableDictionary* _keyImagesByType;
	long long _imageTypeToStore;
	NSString* _proxyIdentifier;

}

@property (assign,setter=_setImageTypeToStore:,nonatomic) long long _imageTypeToStore;              //@synthesize imageTypeToStore=_imageTypeToStore - In the implementation block
@property (nonatomic,copy) INImage * keyImage; 
@property (nonatomic,copy) NSString * proxyIdentifier;                                              //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * keyImagesByType;                                          //@synthesize keyImagesByType=_keyImagesByType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)proxyIdentifier;
-(unsigned long long)servicePriority;
-(NSString *)serviceIdentifier;
-(id)init;
-(INImage *)keyImage;
-(void)encodeWithCoder:(id)arg1 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_imageTypeToStore;
-(NSDictionary *)keyImagesByType;
-(id)storeImageSynchronously:(id)arg1 error:(id*)arg2 ;
-(id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_setImageTypeToStore:(long long)arg1 ;
-(void)setKeyImagesByType:(NSDictionary *)arg1 ;
-(void)setKeyImage:(INImage *)arg1 ;
-(void)setProxyIdentifier:(NSString *)arg1 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end
