/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKClassroomLockScreenMonitoring.h>

@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring> {

	int mDidAppearObserver;
	int mDidDismissObserver;
	BOOL _classroomLockScreenVisible;

}

@property (assign,getter=isClassroomLockScreenVisible,nonatomic) BOOL classroomLockScreenVisible;              //@synthesize classroomLockScreenVisible=_classroomLockScreenVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)endObserving;
-(void)startObserving;
-(void)dealloc;
-(void)setClassroomLockScreenVisible:(BOOL)arg1 ;
-(void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2 ;
-(void)dismissClassroomLockScreen;
-(BOOL)isClassroomLockScreenVisible;
@end
