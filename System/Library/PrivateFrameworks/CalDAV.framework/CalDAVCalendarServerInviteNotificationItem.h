/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _uid;
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CoreDAVItemWithNoChildren* _calendarPublic;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVItemWithHrefChildItem* _hostURL;
	CalDAVCalendarServerOrganizerItem* _organizer;
	CoreDAVLeafItem* _summary;
	CalDAVSupportedCalendarComponentSet* _supportedCalendarComponentSet;

}

@property (nonatomic,retain) CoreDAVLeafItem * uid;                                                            //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) CoreDAVHrefItem * href;                                                           //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;                                         //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendarPublic;                                       //@synthesize calendarPublic=_calendarPublic - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerAccessItem * access;                                          //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * hostURL;                                           //@synthesize hostURL=_hostURL - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerOrganizerItem * organizer;                                    //@synthesize organizer=_organizer - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                                                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) CalDAVSupportedCalendarComponentSet * supportedCalendarComponentSet;              //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
-(CoreDAVLeafItem *)summary;
-(CoreDAVHrefItem *)href;
-(void)setUid:(CoreDAVLeafItem *)arg1 ;
-(CalDAVCalendarServerAccessItem *)access;
-(id)init;
-(CoreDAVItemWithHrefChildItem *)hostURL;
-(CalDAVCalendarServerOrganizerItem *)organizer;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(CoreDAVLeafItem *)uid;
-(void)setHostURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CalDAVSupportedCalendarComponentSet *)supportedCalendarComponentSet;
-(void)setOrganizer:(CalDAVCalendarServerOrganizerItem *)arg1 ;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
-(void)setSupportedCalendarComponentSet:(CalDAVSupportedCalendarComponentSet *)arg1 ;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCalendarPublic:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4 ;
-(BOOL)isComponentSupportedForString:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)calendarPublic;
@end

