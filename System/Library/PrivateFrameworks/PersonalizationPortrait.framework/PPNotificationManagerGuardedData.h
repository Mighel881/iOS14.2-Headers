/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject, SGSuggestionsServiceContactsProtocol;
@class PPNotificationHandler, CNContactStore, EKEventStore;

@interface PPNotificationManagerGuardedData : NSObject {

	PPNotificationHandler* _contactsHandler;
	id<NSObject> _contactsToken;
	CNContactStore* _cnStore;
	PPNotificationHandler* _meCardHandler;
	id<NSObject> _meCardToken;
	id<NSObject> _meCardDonationToken;
	PPNotificationHandler* _portraitChangeHandler;
	int _portraitChangeToken;
	PPNotificationHandler* _portraitInvalidationHandler;
	int _portraitInvalidationToken;
	PPNotificationHandler* _eventKitHandler;
	id<NSObject> _eventKitToken;
	EKEventStore* _ekStore;
	long long _eventKitChangeTrackingToken;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	PPNotificationHandler* _suggestionsHandler;
	id _suggestionsToken;

}
-(id)description;
@end
