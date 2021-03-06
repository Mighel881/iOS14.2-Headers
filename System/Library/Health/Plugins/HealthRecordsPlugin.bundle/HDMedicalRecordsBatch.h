/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, HDCodableObjectCollection;

@interface HDMedicalRecordsBatch : NSObject {

	NSArray* _medicalRecords;

}

@property (nonatomic,copy,readonly) NSArray * medicalRecords;                                  //@synthesize medicalRecords=_medicalRecords - In the implementation block
@property (nonatomic,copy,readonly) HDCodableObjectCollection * objectCollection; 
+(id)medicalRecordsBatchFromObjectCollection:(id)arg1 ;
-(NSArray *)medicalRecords;
-(HDCodableObjectCollection *)objectCollection;
-(id)initWithMedicalRecords:(id)arg1 ;
@end

