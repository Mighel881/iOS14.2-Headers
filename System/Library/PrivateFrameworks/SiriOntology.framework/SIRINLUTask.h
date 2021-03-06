/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class USOSerializedGraph;

@interface SIRINLUTask : NSObject <NSSecureCoding> {

	USOSerializedGraph* _task;
	double _score;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) double score;                           //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setScore:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)score;
-(USOSerializedGraph *)task;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(id)initWithTask:(id)arg1 score:(double)arg2 ;
@end

