/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNPrimitiveUserDefaults;
@class NSDictionary;

@interface CNUserDefaults : NSObject {

	id<CNPrimitiveUserDefaults> _primitiveDefaults;
	NSDictionary* _registeredDefaults;

}

@property (copy) NSDictionary * registeredDefaults;              //@synthesize registeredDefaults=_registeredDefaults - In the implementation block
+(id)standardPreferences;
+(id)preferencesWithApplicationID:(id)arg1 ;
+(id)inMemoryPreferences;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)userHasOptedOutOfPreference:(id)arg1 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)synchronize;
-(double)doubleForKey:(id)arg1 ;
-(id)primitiveDefaults;
-(id)initWithApplicationID:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setRegisteredDefaults:(NSDictionary *)arg1 ;
-(void)setupAutosync;
-(long long)integerForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(NSDictionary *)registeredDefaults;
-(BOOL)userHasOptedInToPreference:(id)arg1 ;
-(id)initWithPrimitiveDefaults:(id)arg1 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
@end
