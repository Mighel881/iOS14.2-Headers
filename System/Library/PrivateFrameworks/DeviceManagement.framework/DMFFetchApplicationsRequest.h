/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchApplicationsRequest : DMFTaskRequest {

	BOOL _excludeIcon;
	BOOL _excludeUnmanagedApps;
	BOOL _deleteFeedback;
	unsigned long long _typeFilter;
	unsigned long long _stateFilter;
	NSArray* _bundleIdentifiers;

}

@property (assign,nonatomic) BOOL excludeIcon;                            //@synthesize excludeIcon=_excludeIcon - In the implementation block
@property (assign,nonatomic) BOOL excludeUnmanagedApps;                   //@synthesize excludeUnmanagedApps=_excludeUnmanagedApps - In the implementation block
@property (assign,nonatomic) BOOL deleteFeedback;                         //@synthesize deleteFeedback=_deleteFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long typeFilter;               //@synthesize typeFilter=_typeFilter - In the implementation block
@property (assign,nonatomic) unsigned long long stateFilter;              //@synthesize stateFilter=_stateFilter - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                   //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(unsigned long long)typeFilter;
-(unsigned long long)stateFilter;
-(BOOL)excludeIcon;
-(BOOL)excludeUnmanagedApps;
-(BOOL)deleteFeedback;
-(void)setExcludeIcon:(BOOL)arg1 ;
-(void)setExcludeUnmanagedApps:(BOOL)arg1 ;
-(void)setDeleteFeedback:(BOOL)arg1 ;
-(void)setTypeFilter:(unsigned long long)arg1 ;
-(void)setStateFilter:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)bundleIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
@end
