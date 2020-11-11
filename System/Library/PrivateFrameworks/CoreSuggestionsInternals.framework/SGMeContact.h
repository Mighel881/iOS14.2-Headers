/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContact, NSString, NSSet;

@interface SGMeContact : NSObject {

	CNContact* _meContact;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _formattedName;
	NSSet* _emailAddresses;
	NSSet* _phoneNumbers;
	NSSet* _postalAddresses;

}

@property (nonatomic,readonly) NSString * givenName;                  //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                 //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * formattedName;              //@synthesize formattedName=_formattedName - In the implementation block
@property (nonatomic,readonly) NSSet * emailAddresses;                //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSSet * phoneNumbers;                  //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,readonly) NSSet * postalAddresses;               //@synthesize postalAddresses=_postalAddresses - In the implementation block
+(id)keysToFetch;
-(id)initWithContact:(id)arg1 ;
-(NSString *)familyName;
-(NSSet *)emailAddresses;
-(NSString *)givenName;
-(NSString *)formattedName;
-(NSSet *)postalAddresses;
-(NSSet *)phoneNumbers;
-(BOOL)isSameAsOrUnifiedWithContact:(id)arg1 ;
@end
