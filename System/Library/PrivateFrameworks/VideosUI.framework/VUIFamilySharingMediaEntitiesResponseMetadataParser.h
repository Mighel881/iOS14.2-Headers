/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject {

	AMSURLResult* _result;

}

@property (nonatomic,retain) AMSURLResult * result;              //@synthesize result=_result - In the implementation block
-(id)init;
-(void)setResult:(AMSURLResult *)arg1 ;
-(AMSURLResult *)result;
-(id)parseAMSURLResult:(id)arg1 ;
-(id)_parseTotalFromMetaBag;
-(id)_parseOffsetFromMetaBag;
@end

