/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARResultCombiner : NSObject {

	unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner> >* _combiner;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)combinedResultWithSystemResults:(id)arg1 ;
@end
