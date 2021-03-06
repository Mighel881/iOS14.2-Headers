/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKRemoteUIController.h>

@class NSArray, NSURL, NSDictionary;

@interface GKAccountRemoteUIController : GKRemoteUIController {

	BOOL _authenticatePlayerOnCompletion;
	long long _mode;
	NSArray* _availableExternalServices;
	NSURL* _url;
	NSDictionary* _postBody;

}

@property (nonatomic,retain) NSArray * availableExternalServices;              //@synthesize availableExternalServices=_availableExternalServices - In the implementation block
@property (assign,nonatomic) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL authenticatePlayerOnCompletion;              //@synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * postBody;                          //@synthesize postBody=_postBody - In the implementation block
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)bagKey;
-(id)initWithMode:(long long)arg1 ;
-(id)fallbackURL;
-(NSURL *)url;
-(long long)mode;
-(NSDictionary *)postBody;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(id)initWithMode:(long long)arg1 player:(id)arg2 ;
-(void)setPostBody:(NSDictionary *)arg1 ;
-(BOOL)authenticatePlayerOnCompletion;
-(void)fireCompletionHandler;
-(id)postBodyForInitialLoad;
-(NSArray *)availableExternalServices;
-(void)setAuthenticatePlayerOnCompletion:(BOOL)arg1 ;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAvailableExternalServices:(NSArray *)arg1 ;
@end

