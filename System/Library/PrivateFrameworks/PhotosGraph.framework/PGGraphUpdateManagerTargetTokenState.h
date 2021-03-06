/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject {

	BOOL _encounteredTargetToken;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) BOOL encounteredTargetToken;                          //@synthesize encounteredTargetToken=_encounteredTargetToken - In the implementation block
-(BOOL)encounteredTargetToken;
-(id)initWithPersistentChangeToken:(id)arg1 ;
-(void)setEncounteredTargetToken:(BOOL)arg1 ;
-(id)description;
-(PHPersistentChangeToken *)changeToken;
@end

