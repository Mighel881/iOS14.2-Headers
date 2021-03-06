/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@interface ICDispatchAfterBlocks : NSObject {

	id<NSCopying> _identifier;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id<NSCopying>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)cancelAll;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(void)dealloc;
@end

