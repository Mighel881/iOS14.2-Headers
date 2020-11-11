/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantType; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (nonatomic,readonly) BOOL rsvpRequested; 
@property (assign,nonatomic) long long pendingStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)knownSingleValueKeysForComparison;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 url:(id)arg2 ;
+(int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1 ;
+(long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(Class)frozenClass;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 ;
-(BOOL)statusChanged;
-(BOOL)commentChanged;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)participantStatus;
-(BOOL)proposedStartDateChanged;
-(NSDate *)lastModifiedParticipationStatus;
-(void)markAsForward;
-(void)setParticipantType:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(id)owner;
-(unsigned)flags;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(id)displayString;
-(void)setPendingStatusRaw:(int)arg1 ;
-(BOOL)_isParticipantStatusDirty;
-(int)pendingStatusRaw;
-(void)setFlags:(unsigned)arg1 ;
-(int)statusRaw;
-(id)description;
-(BOOL)rsvpRequested;
-(long long)pendingStatus;
-(void)setCommentChanged:(BOOL)arg1 ;
-(long long)participantType;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(void)setPendingStatus:(long long)arg1 ;
-(BOOL)isCurrentUser;
-(void)setStatusChanged:(BOOL)arg1 ;
-(long long)participantRole;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(void)setStatusRaw:(int)arg1 ;
@end
