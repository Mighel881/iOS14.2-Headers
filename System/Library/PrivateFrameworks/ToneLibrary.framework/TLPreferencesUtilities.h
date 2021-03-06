/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ToneLibrary/ToneLibrary-Structs.h>
@interface TLPreferencesUtilities : NSObject
+(CFStringRef)copySharedResourcesPreferencesDomain;
+(CFDictionaryRef)_copyAllKeysAndValuesFromDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
+(CFStringRef)preferencesDomain;
+(void)migratePerTopicPreferencesInDomain:(CFStringRef)arg1 withRegularPreferenceKeys:(const id*)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerTopicPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5 ;
+(void)_synchronizeDomain:(CFStringRef)arg1 usingPreferencesScope:(int)arg2 ;
+(void)_setValue:(void*)arg1 forKey:(CFStringRef)arg2 inDomain:(CFStringRef)arg3 usingPreferencesScope:(int)arg4 ;
+(id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id*)arg1 regularPreferenceKeysCount:(unsigned long long)arg2 ;
+(CFStringRef)copySharedResourcesPreferencesDomainForDomain:(CFStringRef)arg1 ;
+(void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(CFStringRef)arg2 usingPreferencesScope:(int)arg3 withBlock:(/*^block*/id)arg4 ;
+(id)perWatchPreferencesDomain;
@end

