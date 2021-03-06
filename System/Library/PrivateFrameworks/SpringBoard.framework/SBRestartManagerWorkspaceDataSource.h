/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBRestartManagerWorkspaceDataSource.h>

@protocol SBRestartManagerWorkspaceDataSource <NSObject>
@required
-(BOOL)isUILocked;
-(void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(/*^block*/id)arg3;
-(id)activePrimaryApplicationBundleID;

@end


@class NSString;

@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUILocked;
-(void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)activePrimaryApplicationBundleID;
@end

