/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {

	NSMutableSet* _supportedReports;

}

@property (nonatomic,retain) NSMutableSet * supportedReports;              //@synthesize supportedReports=_supportedReports - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)supportedReports;
-(BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)addSupportedReport:(id)arg1 ;
-(void)setSupportedReports:(NSMutableSet *)arg1 ;
@end
