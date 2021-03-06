/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SATask, NSArray;

@interface SATaskThreadCallTrees : NSObject {

	SATask* _task;
	NSArray* _threadCallTrees;

}

@property (readonly) SATask * task;                          //@synthesize task=_task - In the implementation block
@property (readonly) NSArray * threadCallTrees;              //@synthesize threadCallTrees=_threadCallTrees - In the implementation block
-(SATask *)task;
-(NSArray *)threadCallTrees;
@end

