/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface VNModelFilesCache : NSObject {

	unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >* m_impl;

}
+(id)sharedInstance;
+(BOOL)useFOpenForModelWithPath:(id)arg1 ;
-(id)load:(id)arg1 ;
-(id)init;
-(void)unload:(id)arg1 ;
-(void)purgeAll;
@end
