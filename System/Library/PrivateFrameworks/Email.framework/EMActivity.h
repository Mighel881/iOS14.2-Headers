/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EFCancelable;
@class EMStatusUpdateProvider, NSDictionary, NSDate, NSProgress, NSError, EMActivityObjectID, NSString;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding> {

	os_unfair_lock_s _lock;
	EMStatusUpdateProvider* _statusUpdateProvider;
	id<EFCancelable> _progressKVOCancellation;
	NSDictionary* _userInfo;
	long long _activityType;
	NSDate* _started;
	NSDate* _finished;
	NSProgress* _progress;
	NSError* _error;
	double _fractionCompleted;
	EMActivityObjectID* _objectID;

}

@property (nonatomic,copy) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double fractionCompleted;                  //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
@property (readonly) EMActivityObjectID * objectID;                     //@synthesize objectID=_objectID - In the implementation block
@property (readonly) BOOL needsPersistentHistory; 
@property (readonly) long long activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (readonly) NSDate * started;                                  //@synthesize started=_started - In the implementation block
@property (readonly) NSDate * finished;                                 //@synthesize finished=_finished - In the implementation block
@property (copy,readonly) NSString * localizedDescription; 
@property (readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)keyPathsForValuesAffectingLocalizedDescription;
-(EMActivityObjectID *)objectID;
-(long long)activityType;
-(NSDictionary *)userInfo;
-(NSString *)localizedDescription;
-(NSDate *)started;
-(void)finishWithError:(id)arg1 ;
-(NSError *)error;
-(void)setFractionCompleted:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(double)fractionCompleted;
-(NSProgress *)progress;
-(NSString *)description;
-(NSDate *)finished;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_observeProgress;
-(id)_localizedDescriptionForFetchState:(long long)arg1 ;
-(id)initWithActivityType:(long long)arg1 userInfo:(id)arg2 ;
-(BOOL)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2 ;
-(void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2 ;
-(BOOL)needsPersistentHistory;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)dealloc;
@end

