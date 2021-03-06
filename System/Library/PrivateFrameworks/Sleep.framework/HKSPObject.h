/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSSet;


@protocol HKSPObject <NSObject,NSSecureCoding,NSCopying,NSMutableCopying>
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@optional
-(NSSet *)significantChanges;
-(NSDate *)lastModifiedDate;

@required
-(id)mutableCopy;
-(unsigned long long)version;
-(void)copyFromObject:(id)arg1;
-(BOOL)isEquivalentTo:(id)arg1;
-(id)initFromObject:(id)arg1;

@end

