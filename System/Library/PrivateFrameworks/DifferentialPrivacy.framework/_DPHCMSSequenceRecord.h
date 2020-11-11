/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@interface _DPHCMSSequenceRecord : _DPCMSSequenceRecord {

	int _sequenceBitIndex;

}

@property (assign,nonatomic) int sequenceBitIndex;              //@synthesize sequenceBitIndex=_sequenceBitIndex - In the implementation block
+(id)entityName;
-(id)description;
-(id)jsonString;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(int)sequenceBitIndex;
-(void)setSequenceBitIndex:(int)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned)arg5 creationDate:(double)arg6 submitted:(BOOL)arg7 objectId:(id)arg8 ;
@end
