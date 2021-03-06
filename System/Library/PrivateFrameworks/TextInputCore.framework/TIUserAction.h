/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, TIKeyboardState;

@interface TIUserAction : NSObject <NSSecureCoding> {

	int _actionType;
	double _startTime;
	double _endTime;
	double _occurenceTime;
	TIDocumentState* _documentState;
	TIKeyboardState* _keyboardState;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double occurenceTime;                         //@synthesize occurenceTime=_occurenceTime - In the implementation block
@property (assign,nonatomic) int actionType;                               //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;              //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;              //@synthesize keyboardState=_keyboardState - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)endTime;
-(TIDocumentState *)documentState;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(double)startTime;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)description;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(id)initWithTIKeyboardState:(id)arg1 ;
-(double)occurenceTime;
-(void)setOccurenceTime:(double)arg1 ;
@end

