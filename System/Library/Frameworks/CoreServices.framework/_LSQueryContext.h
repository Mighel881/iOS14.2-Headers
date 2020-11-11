/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(BOOL)simulateLimitedMappingForXCTests;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
+(id)defaultContext;
-(void)clearCaches;
-(id)init;
-(id)debugDescription;
-(id<_LSQueryResolving>)_resolver;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)resolveQueries:(id)arg1 error:(id*)arg2 ;
-(id)_init;
@end
