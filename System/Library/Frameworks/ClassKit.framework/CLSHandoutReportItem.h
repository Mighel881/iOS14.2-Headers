/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, CLSActivityReport, NSArray;

@interface CLSHandoutReportItem : CLSReportItem <NSSecureCoding, NSCopying> {

	BOOL _completed;
	int _type;
	int _granularity;
	NSString* _studentID;
	NSString* _classID;
	NSString* _handoutID;
	NSString* _attachmentID;
	NSString* _reportID;
	NSDate* _startDate;
	NSDate* _endDate;
	CLSActivityReport* _primaryActivityReport;
	NSArray* _additionalActivityReports;

}

@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int granularity;                                      //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,copy) NSString * studentID;                                   //@synthesize studentID=_studentID - In the implementation block
@property (nonatomic,copy) NSString * classID;                                     //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy) NSString * handoutID;                                   //@synthesize handoutID=_handoutID - In the implementation block
@property (nonatomic,copy) NSString * attachmentID;                                //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,copy) NSString * reportID;                                    //@synthesize reportID=_reportID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;                    //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) CLSActivityReport * primaryActivityReport;              //@synthesize primaryActivityReport=_primaryActivityReport - In the implementation block
@property (nonatomic,copy) NSArray * additionalActivityReports;                    //@synthesize additionalActivityReports=_additionalActivityReports - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)add:(id)arg1 ;
-(NSDate *)endDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)classID;
-(NSDate *)startDate;
-(BOOL)isCompleted;
-(void)setCompleted:(BOOL)arg1 ;
-(id)description;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(int)granularity;
-(NSString *)reportID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGranularity:(int)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setClassID:(NSString *)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(NSString *)studentID;
-(void)setStudentID:(NSString *)arg1 ;
-(NSString *)handoutID;
-(void)setHandoutID:(NSString *)arg1 ;
-(NSString *)attachmentID;
-(void)setAttachmentID:(NSString *)arg1 ;
-(void)setReportID:(NSString *)arg1 ;
-(CLSActivityReport *)primaryActivityReport;
-(void)setPrimaryActivityReport:(CLSActivityReport *)arg1 ;
-(NSArray *)additionalActivityReports;
-(void)setAdditionalActivityReports:(NSArray *)arg1 ;
@end
