/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWSetupTask.h>

@protocol SWScriptsManager;
@class NSString;

@interface SWScriptsSetupTask : NSObject <SWSetupTask> {

	id<SWScriptsManager> _scriptsManager;

}

@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;              //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)performSetup;
-(id<SWScriptsManager>)scriptsManager;
-(id)initWithScriptsManager:(id)arg1 ;
@end

