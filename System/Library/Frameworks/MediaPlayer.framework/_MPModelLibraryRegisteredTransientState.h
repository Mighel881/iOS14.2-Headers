/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject {

	long long _addState;
	long long _keepLocalState;
	MPSectionedCollection* _modelObjects;
	MPSectionedCollection* _relatedModelObjects;
	NSUUID* _token;

}

@property (assign,nonatomic) long long addState;                                     //@synthesize addState=_addState - In the implementation block
@property (assign,nonatomic) long long keepLocalState;                               //@synthesize keepLocalState=_keepLocalState - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;                     //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * relatedModelObjects;              //@synthesize relatedModelObjects=_relatedModelObjects - In the implementation block
@property (nonatomic,copy) NSUUID * token;                                           //@synthesize token=_token - In the implementation block
-(void)setToken:(NSUUID *)arg1 ;
-(long long)addState;
-(NSUUID *)token;
-(void)setAddState:(long long)arg1 ;
-(long long)keepLocalState;
-(MPSectionedCollection *)relatedModelObjects;
-(void)setRelatedModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setKeepLocalState:(long long)arg1 ;
-(MPSectionedCollection *)modelObjects;
@end

