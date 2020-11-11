/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue, ICSAlternateTimeProposal;

@interface ICSUserAddress : ICSProperty

@property (assign,nonatomic) BOOL rsvp; 
@property (nonatomic,retain) NSString * cn; 
@property (assign,nonatomic) int cutype; 
@property (nonatomic,retain) NSString * dir; 
@property (assign,nonatomic) int partstat; 
@property (assign,nonatomic) int schedulestatus; 
@property (assign,nonatomic) int scheduleagent; 
@property (assign,nonatomic) int scheduleforcesend; 
@property (assign,nonatomic) int role; 
@property (nonatomic,retain) ICSDateValue * partstatModified; 
@property (assign,nonatomic) ICSAlternateTimeProposal * alternateTimeProposal; 
@property (assign,nonatomic) BOOL x_apple_self_invited; 
@property (nonatomic,retain) NSString * email; 
@property (nonatomic,retain) NSString * x_apple_telephone; 
@property (nonatomic,retain) NSString * likenessDataString; 
@property (nonatomic,retain) NSString * x_apple_inviterName; 
+(id)URLForNoMail;
+(int)roleFromICSString:(id)arg1 ;
+(int)calendarUserFromICSString:(id)arg1 ;
+(int)participationStatusFromICSString:(id)arg1 ;
+(int)scheduleStatusFromICSString:(id)arg1 ;
+(int)scheduleAgentFromICSString:(id)arg1 ;
+(int)scheduleForceSendFromICSString:(id)arg1 ;
+(id)ICSStringFromCalendarUser:(int)arg1 ;
+(id)ICSStringFromParticipationStatus:(int)arg1 ;
+(id)ICSStringFromScheduleAgent:(int)arg1 ;
+(id)ICSStringFromScheduleStatus:(int)arg1 ;
+(id)ICSStringFromScheduleForceSend:(int)arg1 ;
+(id)ICSStringFromRole:(int)arg1 ;
-(NSString *)dir;
-(NSString *)cn;
-(void)setRole:(int)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(BOOL)rsvp;
-(int)cutype;
-(void)setCn:(NSString *)arg1 ;
-(BOOL)hasPhoneNumber;
-(id)phoneNumber;
-(NSString *)email;
-(int)scheduleagent;
-(ICSDateValue *)partstatModified;
-(void)setCutype:(int)arg1 ;
-(ICSAlternateTimeProposal *)alternateTimeProposal;
-(void)setX_apple_telephone:(NSString *)arg1 ;
-(void)setPartstat:(int)arg1 ;
-(void)setScheduleagent:(int)arg1 ;
-(void)setPartstatModified:(ICSDateValue *)arg1 ;
-(void)setAlternateTimeProposal:(ICSAlternateTimeProposal *)arg1 ;
-(id)displayName;
-(id)initWithEmailAddress:(id)arg1 ;
-(int)partstat;
-(void)setRsvp:(BOOL)arg1 ;
-(void)setDir:(NSString *)arg1 ;
-(void)setURL:(id)arg1 ;
-(BOOL)hasEmailAddress;
-(int)role;
-(id)emailAddress;
-(BOOL)isPhoneNumber;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)fixAddress;
-(id)sanitizeAddressString:(id)arg1 ;
-(BOOL)isEmailAddress;
-(NSString *)x_apple_telephone;
-(BOOL)isHTTPAddress;
-(BOOL)isHTTPSAddress;
-(void)setSchedulestatus:(int)arg1 ;
-(int)schedulestatus;
-(void)setScheduleforcesend:(int)arg1 ;
-(int)scheduleforcesend;
-(void)setX_apple_self_invited:(BOOL)arg1 ;
-(BOOL)x_apple_self_invited;
-(void)setLikenessDataString:(NSString *)arg1 ;
-(NSString *)likenessDataString;
-(void)setX_apple_inviterName:(NSString *)arg1 ;
-(NSString *)x_apple_inviterName;
-(void)setX_calendarserver_email:(id)arg1 ;
-(id)x_calendarserver_email;
@end
