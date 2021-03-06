/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICApp, NSString, NSArray, NSDictionary, NSURL;

@interface ICScheme : NSObject {

	ICApp* _app;
	NSString* _scheme;
	NSArray* _actions;
	NSArray* _capabilities;
	NSDictionary* _definition;

}

@property (nonatomic,copy,readonly) NSDictionary * definition;                           //@synthesize definition=_definition - In the implementation block
@property (nonatomic,__weak,readonly) ICApp * app;                                       //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,readonly) NSURL * universalLinkBaseURL; 
@property (nonatomic,readonly) NSArray * actions;                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSArray * capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL canLaunchApp; 
@property (getter=isCallbackScheme,nonatomic,readonly) BOOL callbackScheme; 
@property (nonatomic,readonly) NSString * callbackSourceNameKey; 
@property (nonatomic,readonly) NSString * callbackSuccessURLKey; 
@property (nonatomic,readonly) NSString * callbackCancelURLKey; 
@property (nonatomic,readonly) NSString * callbackErrorURLKey; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
-(NSString *)scheme;
-(BOOL)isAvailable;
-(NSArray *)capabilities;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(ICApp *)app;
-(BOOL)matchesURL:(id)arg1 ;
-(NSDictionary *)definition;
-(NSArray *)actions;
-(id)initWithDefinition:(id)arg1 app:(id)arg2 ;
-(BOOL)canLaunchApp;
-(NSURL *)universalLinkBaseURL;
-(BOOL)isCallbackScheme;
-(NSString *)callbackSourceNameKey;
-(NSString *)callbackSuccessURLKey;
-(NSString *)callbackCancelURLKey;
-(NSString *)callbackErrorURLKey;
@end

