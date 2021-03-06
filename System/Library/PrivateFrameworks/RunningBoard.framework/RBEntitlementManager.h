/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBEntitlementManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSMapTable, NSSet, NSDictionary, NSString;

@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing> {

	os_unfair_lock_s _lock;
	NSMapTable* _entitlementsByIdentifier;
	NSSet* _availableEntitlements;
	NSDictionary* _restrictedEntitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)stateCaptureTitle;
-(id)allEntitlements;
-(id)captureState;
-(NSString *)debugDescription;
-(id)initWithDomainAttributeEntitlements:(id)arg1 ;
-(id)entitlementsForProcess:(id)arg1 ;
-(void)purgeEntitlementsForProcess:(id)arg1 ;
@end

