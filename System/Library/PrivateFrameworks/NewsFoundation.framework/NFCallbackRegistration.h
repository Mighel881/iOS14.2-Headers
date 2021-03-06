/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFCallbackRegistration.h>

@protocol NFCallbackRegistration <NSObject>
@required
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;

@end


@protocol NFDefinitionContainer;
@class NFCallbackStore, NSString;

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration> {

	NFCallbackStore* _callbackStore;
	id<NFDefinitionContainer> _privateContainer;

}

@property (nonatomic,readonly) NFCallbackStore * callbackStore;                         //@synthesize callbackStore=_callbackStore - In the implementation block
@property (nonatomic,readonly) id<NFDefinitionContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(NFCallbackStore *)callbackStore;
-(id<NFDefinitionContainer>)privateContainer;
-(id)initWithCallbackStore:(id)arg1 privateContainer:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
@end

