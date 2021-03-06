/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAGraphSpecification.h>

@interface PGGraphSpecification : MAGraphSpecification
-(id)nodeClassByDomainAndLabel;
-(void)enumerateEdgeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)edgeClassByDomainAndLabel;
-(Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNodeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgeClassByDomain;
-(Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)nodeClassByDomain;
@end

