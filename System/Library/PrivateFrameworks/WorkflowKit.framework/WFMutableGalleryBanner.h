/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGalleryBanner.h>

@class CKRecordID, NSString;

@interface WFMutableGalleryBanner : WFGalleryBanner {

	CKRecordID* identifier;
	NSString* name;
	CKRecordID* detailPage;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) CKRecordID * detailPage; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(CKRecordID *)base;
-(void)setBase:(CKRecordID *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)language;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)detailPage;
-(void)setDetailPage:(CKRecordID *)arg1 ;
@end
