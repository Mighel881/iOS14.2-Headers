/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircle/FamilyCircle-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSNumber, NSDate, CNContact;

@interface FAFamilyMember : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * altDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned long long age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,readonly) long long memberType; 
@property (nonatomic,copy,readonly) NSNumber * memberSortOrder; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,copy,readonly) NSDate * invitationDate; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isOrganizer; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,copy,readonly) NSString * iTunesNotLinkedMessage; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
@property (nonatomic,readonly) CNContact * contact; 
+(BOOL)supportsSecureCoding;
-(NSString *)firstName;
-(BOOL)isMe;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSNumber *)dsid;
-(NSString *)statusString;
-(CNContact *)contact;
-(NSDate *)joinedDate;
-(unsigned long long)hash;
-(NSString *)altDSID;
-(NSString *)inviteEmail;
-(NSString *)lastName;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isParent;
-(NSDictionary *)dictionary;
-(long long)memberType;
-(BOOL)isOrganizer;
-(unsigned long long)age;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isChildAccount;
-(BOOL)hasAskToBuyEnabled;
-(BOOL)isEqualToFamilyMember:(id)arg1 ;
-(BOOL)hasParentalControlsEnabled;
-(NSString *)memberTypeString;
-(id)_dateWithEpochString:(id)arg1 ;
-(BOOL)_nilEqualProperty:(id)arg1 with:(id)arg2 ;
-(BOOL)hasLinkediTunesAccount;
-(NSString *)iTunesAccountUsername;
-(NSString *)memberTypeDisplayString;
-(NSNumber *)memberSortOrder;
-(NSDate *)invitationDate;
-(NSString *)iTunesNotLinkedMessage;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)appleID;
-(NSString *)hashedDSID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

