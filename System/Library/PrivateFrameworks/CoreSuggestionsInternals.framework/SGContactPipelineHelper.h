/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableDictionary, NSString;

@interface SGContactPipelineHelper : NSObject {

	NSMutableDictionary* _lengthsCounts;
	unsigned long long _phonesSeenInContacts;
	NSString* _mostCommonCountryCode;
	opaque_pthread_mutex_t _helperLock;

}
+(id)sharedInstance;
+(id)normalizedDigits:(id)arg1 ;
+(id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2 ;
+(id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2 ;
+(BOOL)personExistsInContacts:(id)arg1 name:(id)arg2 handle:(id)arg3 ;
-(id)init;
-(BOOL)numberMatchesContactsForm:(id)arg1 amongContactsWithIdentifiers:(id)arg2 ;
-(BOOL)numberMatchesContactsForm:(id)arg1 ;
-(void)dealloc;
@end

