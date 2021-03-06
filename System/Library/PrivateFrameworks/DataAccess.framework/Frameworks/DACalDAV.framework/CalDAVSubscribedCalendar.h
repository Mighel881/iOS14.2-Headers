/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSString;


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) BOOL hasAlarmFilter; 
@property (assign,nonatomic) BOOL hasAttachmentFilter; 
@property (assign,nonatomic) BOOL hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
@optional
-(void)setLanguageCode:(id)arg1;
-(NSString *)languageCode;
-(BOOL)autoprovisioned;
-(void)setAutoprovisioned:(BOOL)arg1;
-(void)setLocationCode:(id)arg1;
-(NSString *)locationCode;

@required
-(BOOL)hasAlarmFilter;
-(BOOL)hasAttachmentFilter;
-(BOOL)hasTaskFilter;
-(void)setSubscriptionURL:(id)arg1;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(void)setHasTaskFilter:(BOOL)arg1;
-(NSURL *)subscriptionURL;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1;

@end

