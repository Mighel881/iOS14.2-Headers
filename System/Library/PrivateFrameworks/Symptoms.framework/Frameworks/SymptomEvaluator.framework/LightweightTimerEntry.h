/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface LightweightTimerEntry : NSObject {

	unsigned _seqNo;
	id _userParam;
	unsigned long long _slotNum;

}

@property (nonatomic,retain) id userParam;                            //@synthesize userParam=_userParam - In the implementation block
@property (assign,nonatomic) unsigned long long slotNum;              //@synthesize slotNum=_slotNum - In the implementation block
@property (assign,nonatomic) unsigned seqNo;                          //@synthesize seqNo=_seqNo - In the implementation block
-(unsigned long long)slotNum;
-(void)setSeqNo:(unsigned)arg1 ;
-(id)userParam;
-(id)description;
-(void)setUserParam:(id)arg1 ;
-(unsigned)seqNo;
-(void)setSlotNum:(unsigned long long)arg1 ;
@end

