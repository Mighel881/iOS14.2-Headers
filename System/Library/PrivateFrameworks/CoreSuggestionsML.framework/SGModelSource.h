/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PMLSessionDescriptor;

@interface SGModelSource : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
-(Class)modelClass;
-(void)setModelClass:(Class)arg1 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
-(id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
@end
