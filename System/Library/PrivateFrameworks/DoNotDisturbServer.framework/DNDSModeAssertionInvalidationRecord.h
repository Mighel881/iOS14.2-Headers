/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class DNDSModeAssertionRecord, NSNumber, DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionSourceRecord, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	DNDSModeAssertionRecord* _assertion;
	NSNumber* _invalidationDate;
	DNDSModeAssertionInvalidationDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;
	NSString* _reason;
	NSString* _reasonOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DNDSModeAssertionRecord * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,retain) NSNumber * invalidationDate;                                       //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionInvalidationDetailsRecord * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reasonOverride;                                         //@synthesize reasonOverride=_reasonOverride - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidation:(id)arg1 ;
-(NSString *)reason;
-(DNDSModeAssertionInvalidationDetailsRecord *)details;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(NSNumber *)invalidationDate;
-(void)setAssertion:(DNDSModeAssertionRecord *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(DNDSModeAssertionSourceRecord *)source;
-(DNDSModeAssertionRecord *)assertion;
-(id)object;
-(void)setDetails:(DNDSModeAssertionInvalidationDetailsRecord *)arg1 ;
-(void)setInvalidationDate:(NSNumber *)arg1 ;
-(NSString *)reasonOverride;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setReasonOverride:(NSString *)arg1 ;
@end

